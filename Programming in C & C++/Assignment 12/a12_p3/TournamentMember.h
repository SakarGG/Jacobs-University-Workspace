/*
CH-230-A
a12 p12.3[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H
#include <iostream>
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

        //static string location;

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


class Player : public TournamentMember {
    
    private: 

		int playerNumber;
        string playerPosition;
        int goals;
        string foot;

	public:

        //Parametric Constructor,
        Player(const char*, const char*, const char*, int, double, int, string, int, string); 

		//Default Constructor.
		Player();					

		//Copy Constructor.
		Player(const Player&);	

        //Extra functionality.
        void printPlayerStats() const;
        void goalIncrement() {cout << "\nIncreasing goal by 1"; goals++;}	

        //Inline inclass setters.
        void setPlayernumber(int pn) {playerNumber = pn;}
        void setPlayerPosition(string pp) {playerPosition = pp;}
        void setFoot(string ft) {foot = ft;}

        //Inline inclass getters.
        int getPlayernumber() {return playerNumber;}
        string getPlayerposition() {return playerPosition;}
        int getPlayergoals() {return goals;}
        string getFoot() {return foot;}

		//Destructor.
		~Player();

};

#endif