/*
CH-230-A
a10 p10.6[h]
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
    int boredom;
    double hunger;
    double thirst;
    double height;
	double health;
	double weight;
    double ConvToDouble(int hunger);
    int ConvToInt(double hunger);
    double Thirst(double hunger);


	public:

    //Four constructors to the class Critter.
    Critter();
    Critter(string &newname);
    Critter(string &newname, int newboredom, double newhealth, 
            double newweight, int newhunger, double newheight = 10.0);
    Critter(string &newname, int newboredom, double newhealth, 
            double newweight, int newhunger, int newthirst,
            double newheight = 10.0);

    //Setters.
    void setName(string& newname);
    void setHunger(int newhunger);
    void setThirst(int newthirst);
	void setBoredom(int newboredom);
	void setHealth(double newhealth);
	void setWeight(double newweight);
    
    //Getters.
    int getHunger();
    int getThirst();
    double getHealth();
    double getWeight();
    
    //Printer.
    void print();
    
};