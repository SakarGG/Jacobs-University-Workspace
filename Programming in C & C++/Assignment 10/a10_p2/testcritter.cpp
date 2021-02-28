/*
CH-230-A
a10 p10.2[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	int age;
	double height;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);

	//Added age property.
	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	//Added height property.
	cout << "Height: ";
	cin >> height;
	c.setHeight(height);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << endl << "You have created:" << endl;
	c.print();
        return 0;
}