/*
CH-230-A
a11 p11.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//Main function which displays everything
int main(int argc, char** argv){

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