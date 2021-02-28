/*
CH-230-A
a10 p10.2[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int age;
	int health;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setAge(int newage);
	void setHeight(double newheight);
	// getter method
	int getAge();
	int getHunger();
	double getHeight();
	// service method
	void print();
};