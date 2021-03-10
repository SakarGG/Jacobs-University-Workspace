/*
CH-231-A
a5 p5.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include <fstream>
#include <chrono>

using namespace std;


//Naive function.
unsigned long long int naiveRecursive(unsigned long long int n){

    //Less than 2 then no point.
    if(n < 2){
        
        return n;

    }

    //Add the two previous numbers. 
    else{

        return naiveRecursive(n - 1) + naiveRecursive(n - 2);
    }

}


//Bottom Up Approach.
unsigned long long int bottomUp(unsigned long long int n){

    unsigned long long int array[n];
    array[0] = 0;
    array[1] = 1;

    /*Avoid recursion, compute F0, F1, F2, ..., Fn in the given order instead, 
    forming each number by summing the two previous.*/
    for(int i = 2; i <= n; i++){

        array[i] = array[i - 1] + array[i - 2];

    }

    return array[n];

}


//Closed Form procedure.
unsigned long long int closedForm(unsigned long long int n){

    double goldenRatio = ((1.0 + sqrt(5.0)) / 2.0);
    
    //Compute by ”Power of a number” recursion.
    unsigned long long int Fn = (pow(goldenRatio, n) / sqrt(5));

    return round(Fn);

}


//Matrix Multiplication method.
unsigned long long int matrixRepresentation(unsigned long long int n, unsigned long long int array[2][2], unsigned long long int prevTwo[2][1]){

    unsigned long long int mult1, mult2;

    array[0][0] = 1;
    array[0][1] = 1;
    array[1][0] = 1;
    array[1][1] = 0;

    prevTwo[0][0] = 0;
    prevTwo[1][0] = 1;

    /*The above two matrices is multiplied with each other, 
    the first value of prevTwo is the current value, 
    the second value is the value before the current one.*/

    /*Compute by ”Power of a number” recursion 
    using a generalization to 2x2 matrices,
    uses integers only (no floating-point errors.*/

    for(int i = 0; i < n; i++){

        mult1 = prevTwo[0][0];
        mult2 = prevTwo[1][0];

        prevTwo[0][0] = (array[0][0] * mult1) + (array[0][1] * mult2);
        prevTwo[1][0] = (array[1][0] * mult1) + (array[1][1] * mult2); 
        
    }

    return prevTwo[0][0];

}


int main(){

    //Fixed time for all 4 functions, besides naïve, others 
    time_t fixed = 1.0;
    unsigned long long int start = 0;
    double limit = 0.0;

    ofstream naive, bottom, closed, matrix;
    naive.open("NaiveRecursive.txt");
    bottom.open("BottomUp.txt");
    closed.open("ClosedForm.txt");
    matrix.open("MatrixMultiplication.txt");
    
    do{

        auto begin = chrono::steady_clock::now();

        unsigned long long int result1 = naiveRecursive(start);

        auto end = chrono::steady_clock::now();

        auto time = end - begin;
        limit = chrono::duration<double>(time).count();
        
        naive << start << "  " << chrono::duration <double, milli> (time).count() << "  " << result1 << endl;
        start = start + 5;

    }while(limit < fixed);

    naive.close(); 


    start = 0;
    do{

        auto begin = chrono::steady_clock::now();

        unsigned long long int result2 = bottomUp(start);

        auto end = chrono::steady_clock::now();

        auto time = end - begin;
        limit = chrono::duration<double>(time).count();
        
        bottom << start << "  " << chrono::duration <double, milli> (time).count() << "  " << result2 << endl;
        start = start + 5;

    }while(limit < fixed);

    bottom.close(); 


    start = 0;
    do{

        auto begin = chrono::steady_clock::now();

        unsigned long long int result3 = closedForm(start);

        auto end = chrono::steady_clock::now();

        auto time = end - begin;
        limit = chrono::duration<double>(time).count();
        
        closed << start << "  " << chrono::duration <double, milli> (time).count() << "  " << result3 <<endl;
        start = start + 5;

    }while(limit < fixed);

    closed.close(); 


    start = 0;
    unsigned long long int array[2][2];
    unsigned long long int previous[2][1];
    do{

        auto begin = chrono::steady_clock::now();

        unsigned long long int result4 = matrixRepresentation(start, array, previous);

        auto end = chrono::steady_clock::now();

        auto time = end - begin;
        limit = chrono::duration<double>(time).count();
        
        matrix << start << "  " << chrono::duration <double, milli> (time).count() << "  " << result4 << endl;
        start = start + 5;

    }while(limit < fixed);

    matrix.close(); 

    return 0;

}