/*
CH-230-A
a5 p5.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/  

#include <stdio.h>

//n is used in all functions and won't be edited anywhere.
int n;

double s_product(double v[], double w[]){

    double scalar_p = 0;

    for (int i = 0; i < n; i++){

        //Applying the correct formula.
        scalar_p += (v[i] * w[i]);

    }

    return scalar_p;

}


double the_small(double generic[]){

    //Starting point.
    double small = generic[0];

    for (int i = 0; i < n; i++){

        if(generic[i] < small){

            //If the next value is smaller, it is replaced.
            small = generic[i];

        }

    }

    return small;

}


double the_large(double generic[]){

    //Starting point.
    double large = generic[0];

    for (int i = 0; i < n; i++){

        if(generic[i] > large){

            //If the next value is larger, it is replaced.
            large = generic[i];

        }

    }

    return large;

}


int small_pos(double generic[]){

    int s_position = 0;

    //Starting point.
    double idx = generic[0];

    //Searches for the smallest value.
    for(int i = 0; i < n; i++){

        if(generic[i] < idx){

            idx = generic[i];

        }

    }

    //Notes the position of the smallest value.
    for(int j = 0; j < n; j++){

        if(generic[j] == idx){

            s_position = j;
            break;

        }

    }

    return s_position;

}


int large_pos(double generic[]){

    int l_position = 0;

    //Starting point.
    double idx = generic[0];

    //Searches for the largest value.
    for(int i = 0; i < n; i++){

        if(generic[i] > idx){

            idx = generic[i];

        }

    }

    //Notes the position of the largest value.
    for(int j = 0; j < n; j++){

        if(generic[j] == idx){

            l_position = j;
            break;

        }

    }

    return l_position;

}


int main(){

    scanf("%d", &n);
    double v[n], w[n];

    //Putting elements into the arrays.
    for (int i = 0; i < n; i++){

        scanf("%lf", &v[i]);

    }

    for (int i = 0; i < n; i++){

        scanf("%lf", &w[i]);
        
    }

    //Print according to the test case.
    printf("Scalar product=%lf\n", s_product(v, w));

    /*Using one function to return the smallest and 
    another to return its position as one function can
    only return one value.*/

    //Generic passes transformed to specific calls.
    printf("The smallest = %lf\n", the_small(v));
    printf("Position of smallest = %d\n", small_pos(v));

    printf("The largest = %lf\n", the_large(v));
    printf("Position of largest = %d\n", large_pos(v));

    printf("The smallest = %lf\n", the_small(w));
    printf("Position of smallest = %d\n", small_pos(w));

    printf("The largest = %lf\n", the_large(w));
    printf("Position of largest = %d\n", large_pos(w));

    return 0;

}