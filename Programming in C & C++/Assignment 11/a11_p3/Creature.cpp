/*
CH-230-A
a11 p11.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
#include <cmath>

using namespace std;

//Setting distance to 10.
Creature::Creature(): distance(10){

    cout << "Constructor for Creature" << endl;

}

//Printing the running meters.
void Creature::run() const{ 

    cout << "Method for Creature" << endl;
    cout << "running " << distance << " meters!\n";

} 

//Destructor.
Creature::~Creature(){

    cout << "Destructor for Creature" << endl;

}



//Setting distFactor to 3.
Wizard::Wizard() : distFactor(3){

    cout << "Constructor for Wizard" << endl;

}

//Printing the hovering meters.
void Wizard::hover() const{

    cout << "Method for Wizard" << endl;
    cout << "hovering " << (distFactor * distance) << " meters!\n";

}

//Destructor.
Wizard::~Wizard(){

    cout << "Destructor for Wizard" << endl;

}

 

//Setting sharpness to 5.
Barbarian::Barbarian() : sharpness(2){

    cout << "Constructor for Barbarian" << endl;

}

//Printing the sharpness shine.
void Barbarian::sword() const{  

    cout << "Method for Barbarian" << endl;
    cout << "sharpness " << pow(sharpness, distance) << " shiny!\n";

}

//Destructor.
Barbarian::~Barbarian(){

    cout << "Destructor for Barbarian" << endl;

}



//Setting agility to 32.
Headhunter::Headhunter() : agility(32){

    cout << "Constructor for Headhunter" << endl;

}

//Printing the slow agility.
void Headhunter::card() const{

    cout << "Method for Headhunter" << endl;
    cout << "agility " << (agility / distance) << " slow!\n";

}

//Destructor.
Headhunter::~Headhunter(){

    cout << "Destructor for Headhunter" << endl;

}