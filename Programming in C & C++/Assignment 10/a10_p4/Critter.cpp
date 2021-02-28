/*
CH-230-A
a10 p10.4[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
 
using namespace std;

//Constructor for default critter.
Critter::Critter(){
	
    name = "default_critter";
	hunger = 0;
    boredom = 0;
    height = 5;
    health = 0;
    weight = 0;
    
}

//The other two constructor for Pou constructor.
Critter::Critter(string &newname){

    name = newname;
	hunger = 0;
    boredom = 0;
    height = 5;
    health = 0;
    weight = 0;
   
}


Critter::Critter(string &newname, int newboredom, double newhealth, 
				double newweight, int newhunger, double newheight){
 
    name = newname;
    boredom = newboredom;
    health = newhealth;
    weight = newweight;
    hunger = newhunger;
    height = newheight;

}
 

//Setting the variables for the critter.
void Critter::setName(string& newname){

    name = newname;

}
 

void Critter::setHealth(double newhealth){

    health = newhealth;

}
 

void Critter::setWeight(double newweight){

    weight = newweight;

}


//Printing the critter features.
void Critter::print(){

	cout << endl;

    cout << "I am " << name << "." << endl;
	cout << "My hunger level is " << hunger << "." << endl;
	cout << "My height is " << height << "." << endl;
    cout << "My health level is " << health << "." << endl;
	cout << "My weight is " << weight << "." << endl;

	cout << endl;
    
}
 
//Getting the critter features.
int Critter::getHunger(){

    return hunger;

}
 

double Critter::getHealth(){

    return health;

}
 

double Critter::getWeight(){

    return weight;

}