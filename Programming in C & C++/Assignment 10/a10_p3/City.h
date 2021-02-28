/*
CH-230-A
a10 p10.3[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <string> 

class City{

private:  

	//Private variables.
    std::string mayor;
	int population;
	double area;

public: 

	//All the methods applicable for all instances.
	//Setters, printers and getters.
    void setMayor(std::string &newmayor);
	void setPopulation(int newpopulation);
	void setArea(double newarea);
	void print();
	int getPopulation();
	double getArea();

};