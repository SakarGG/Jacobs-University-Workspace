/*
CH-230-A
a10 p10.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv){

	//Three instances of the class City.
	City Bremen, Paris, London;

	//Variables for input.
    string mayor;
	int population;
	double area;
	
	//stdin
	cout << endl << "Please enter data" << endl;

	//Using setters to set the features of that city.
	cout << "Population of Bremen: ";
	cin >> population;
	Bremen.setPopulation(population);
	cout << "Population of Paris: ";
	cin >> population;
	Paris.setPopulation(population);
	cout << "Population of London: ";
	cin >> population;
	London.setPopulation(population);

	cout << endl;

	cout << "Mayor of Bremen: ";
	cin >> mayor;
	Bremen.setMayor(mayor);
	cout << "Mayor of Paris: ";
	cin >> mayor;
	Paris.setMayor(mayor);
	cout << "Mayor of London: ";
	cin >> mayor;
	London.setMayor(mayor);

	cout << endl;

	cout << "Area of Bremen: ";
	cin >> area;
	Bremen.setArea(area);
	cout << "Area of Paris: ";
	cin >> area;
	Paris.setArea(area);
	cout << "Area of London: ";
	cin >> area;
	London.setArea(area);

	cout << endl;

	//Printing the setted values.
	cout << endl << "You have created:" << endl << endl;
	
    cout << "Bremen\n";
	Bremen.print();
    cout << "Paris\n";
	Paris.print();
    cout << "London\n";
	London.print();
	
	return 0;

}