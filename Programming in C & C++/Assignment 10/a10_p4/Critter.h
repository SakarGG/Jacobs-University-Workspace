/*
CH-230-A
a10 p10.4[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <string> 
using namespace std;
 
class Critter{
	
	private:

    //All the variables in private.
	string name;
    int hunger;
    int boredom;
    double height;
	double health;
	double weight;

	public:

    //Three constructors to the class Critter.
    Critter();
    Critter(string &newname);
    Critter(string &newname, int newboredom, double newhealth, 
            double newweight, int newhunger, double newheight = 10.0);

    //Setters.
    void setName(string& newname);
    void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHealth(double newhealth);
	void setWeight(double newweight);
    
    //Getters.
    int getHunger();
    double getHealth();
    double getWeight();
    
    //Printer.
    void print();
    
};