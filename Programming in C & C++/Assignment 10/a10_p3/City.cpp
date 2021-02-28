/*
CH-230-A
a10 p10.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//All required methods.
void City::setMayor(string &newmayor){

	mayor = newmayor;

}

void City::setPopulation(int newpopulation){

	population = newpopulation;

}

void City::setArea(double newarea){

	area = newarea;

}

void City::print(){

	cout << "Population: " << population << "\n" 
	<< "Mayor: " << mayor << "\n" << "Area: " << area << "\n" 
	<< endl;

}

int City::getPopulation(){

	return population;

}

double City::getArea(){

	return area;
    
}