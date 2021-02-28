/*
CH-230-A
a10 p10.2[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

//Using setters to add age property.
void Critter::setAge(int newage) {
	age = newage;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//Using setters to add height property.
void Critter::setHeight(double newheight) {
	height = newheight;
}

//Modified the print method to include the new properties.
void Critter::print() {
	cout << "My name is " << name << ". I am " << age << " years old." << 
			" I am " << height <<"cm tall and my hunger level is " << 
			hunger << "." << endl << endl;
}

/*Since the new properties are integers/ doubles, they need to be returned
so we use getters.*/
int Critter::getAge() {
	return age;
}

int Critter::getHunger() {
	return hunger;
}

double Critter::getHeight() {
	return height;
}