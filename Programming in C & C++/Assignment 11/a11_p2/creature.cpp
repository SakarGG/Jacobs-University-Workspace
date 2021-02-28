/*
CH-230-A
a11 p11.2[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cmath>

using namespace std;

//Main Parent class for the following 3 child classes.
class Creature{

	public:
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;

};


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


//Wizard class inherited from Creature parent class.
class Wizard : public Creature{

	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;

};


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

//Barbarian class inherited from Creature parent class.
class Barbarian : public Creature{

    public:
        Barbarian();
        void sword() const;
        ~Barbarian();

    private:
        int sharpness;

};  


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


//Headhunter class inherited from Creature parent class.
class Headhunter : public Creature{

    public:
        Headhunter();
        void card() const;
        ~Headhunter();

    private:
        double agility;

};


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


//Main function which displays everything
int main(){ 

    cout << endl;

    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Barbarian.\n";
    Barbarian b;
    b.run();
    b.sword();

    cout << "\nCreating a Headhunter.\n";
    Headhunter h;
    h.run();
    h.card();

    cout << endl;

    return 0;

} 