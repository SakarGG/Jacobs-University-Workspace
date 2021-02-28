/*
CH-230-A
a11 p11.3[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <string>

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


//Wizard class inherited from Creature parent class.
class Wizard : public Creature{

	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;

};


//Barbarian class inherited from Creature parent class.
class Barbarian : public Creature{

    public:
        Barbarian();
        void sword() const;
        ~Barbarian();

    private:
        int sharpness;

}; 


//Headhunter class inherited from Creature parent class.
class Headhunter : public Creature{

    public:
        Headhunter();
        void card() const;
        ~Headhunter();

    private:
        double agility;

};
