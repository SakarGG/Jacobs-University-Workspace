/*
CH-230-A
a10 p10.4[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
#include <cstdlib>

using namespace std;
 
int main(int argc, char** argv){
 
    string name = "Pou";
    
    //4 instances of critters.
    //All unique
    Critter c_1;
    Critter c_2(name);
    Critter c_3(name, 6, 96.2, 71.6, 2);
    Critter c_4(name, 6, 96.2, 71.6, 2, 42.9);
    
    //Printing the instances.
    c_1.print();
    c_2.print();
    c_3.print();
    c_4.print();

    return 0;
}