/*
CH-230-A
a3 p3.8[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

float do_sum(float domath[], int n){

    float sum = 0;

    //Either adding all ten floats or until before -99.0
    for(int i = 0; i < n; i++){

        sum += domath[i];

    }

    return sum;
}


float do_average(float sum, int n){

    //Either average of all ten floats or until before -99.0
    float average = sum/ n;
    return (average);

}


int main(){ 
    
    int n = 10;
    float sum = 0, average;
    float domath[n];

    for(int idx = 0; idx < n; idx++){

        scanf("%f", &domath[idx]);

        /*To stop the input, the user can enter -99.0 and get their sum 
        and average before -99.0*/
        if (domath[idx] == -99.0){

            /*Removing -99.0 from the array and changing the value
            for n as n is the upper limit in the do_sum function and the
            denominater in the do_average function*/
            domath[idx] = '\0';
            n = idx;

            break; 

        }
 
    }

    //Calling the results from the functions
    sum = do_sum(domath, n);
    average = do_average(sum, n);

    printf("Sum=%f\n", sum);
    printf("Average=%f\n", average);

    return 0;

}
