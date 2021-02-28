/*
CH-230-A
a12 p12.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std; 

/*
Default location for all class objects.

If setter is not used in test file, 
"Nowhere" would be printed as location for all.
*/

string TournamentMember::location = "Nowhere";

//Parametric Constructor.
TournamentMember::TournamentMember(const char* fn, const char* ln, 
                                   const char* date, int e, double s){
    
    strcpy(firstname, fn);
    strcpy(lastname, ln);
    strcpy(DOB, date);
    experience = e; 
    success = s;

	cout << "Parametric Constructor for TournamentMember class" << endl;

}


//Default Constructor.
TournamentMember::TournamentMember(){

	strcpy(firstname, "DEFAULT");
    strcpy(lastname, "DEFAULT");
    strcpy(DOB, "1970-01-01");
    experience = 0;
    success = 0.00;

	cout << "Default Constructor for TournamentMember class" << endl;

}


//Copy Constructor.
TournamentMember::TournamentMember(const TournamentMember& tm){

    strcpy(firstname, tm.firstname);
    strcpy(lastname, tm.lastname);
    strcpy(DOB, tm.DOB);
    experience = tm.experience; 
    success = tm.success;

    cout << "Copy Constructor for TournamentMember class" << endl;

}	


//Parent method used in later inherited classes.
void TournamentMember::printStats() const{

    cout << endl << endl;

	cout << "First name: " << firstname << endl << "Last name: " << lastname 
    << endl << "Date of Birth: " << DOB << endl << "Location: " << location << endl 
    << "Years of Experience: " << experience << endl << "Success Rate: " << success;

}


//Destructor.
TournamentMember::~TournamentMember(){

	cout << "Destructor for TournamentMember class" << endl;

}



//Parametric Constructor.

Player::Player(const char* fn, const char* ln, const char* date, 
               int e, double s, int n, string p, int g, string f) :
               TournamentMember(fn, ln, date, e, s){ 

    playerNumber = n;
    playerPosition = p;
    goals = g; 
    foot = f;

	cout << "Parametric Constructor for Player class" << endl;

}


//Default Constructor.
Player::Player(){

    playerNumber = 0;
    playerPosition = "Audience";
    goals = 0;
    foot = "Not alive";

	cout << "Default Constructor for Player class" << endl;

}


//Copy Constructor.
Player::Player(const Player& pl){

    playerNumber = pl.playerNumber;
    playerPosition = pl.playerPosition;
    goals = pl.goals;
    foot = pl.foot;

    cout << "Copy Constructor for Player class" << endl;

}	


//Parent method used in later inherited classes.
void Player::printPlayerStats() const{

    cout << endl << endl;

	cout << "Player Number: " << playerNumber << endl << "Player Position: " 
    << playerPosition << endl << "Total Goals: " << goals << endl << "Foot: " 
    << foot << endl;

}	


//Destructor.
Player::~Player(){

	cout << "Destructor for Player class" << endl;

}