/*
CH-230-A
a12 p12.2[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H
#include <string>
#include <cstring>

using namespace std;

class TournamentMember{	

	private: 

        //All the properties of a tournament member.
        char firstname[36];
        char lastname[36];
        char DOB[11];
        int experience;
        double success;
        static string location;

    public:

        //Parametric Constructor,
        TournamentMember(const char*, const char*, const char*, int, double); 

		//Default Constructor.
		TournamentMember();					

		//Copy Constructor.
		TournamentMember(const TournamentMember&);	

        //Extra functionality.
        void printStats() const;

		//Inline inclass setters.
        void setFirstname(const char* fn) {strcpy(firstname, fn);}
        void setLastname(char* ln) {strcpy(lastname, ln);}
        void setDob(char* d) {strcpy(DOB, d);}
        void setExperience(int e) {experience = e;}
        void setSuccess(double s) {success = s;}
        void setLocation(string sl) {location = sl;}

        //Inline inclass getters.
        string getFirstname() const {return firstname;}
        string getLastname() const {return lastname;}
        string getDob() const {return DOB;}
        int getExperience() const {return experience;}
        double getSuccess() const {return success;}

		//Destructor.
		~TournamentMember();

};

#endif