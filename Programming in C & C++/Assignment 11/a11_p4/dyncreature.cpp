/*
CH-230-A
a11 p11.4[cpp]
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

    string whichObject;
    int size;

    //Infinite loop.
    while(1){

        //Prompt the user to choose the 4 scenarios.
        cout << "Enter the class on which you want to work in: ";
        getline(cin, whichObject);

        //If quit, then the program stops.
        if(whichObject == "quit"){

            cout << "Program stops!" << endl;
            exit(0);

        }

        else{

            if(whichObject == "Wizard"){

                //Get size for DMA.
                cout << "Enter the size of the dynamic object array: ";
                cin >> size;

                /*Creating dynamic object array for the 
                parent as well as the inherited class.*/
                cout << "Creating a Creature.\n";
                Creature *c = new Creature[size];

                cout << "\nCreating a Wizard.\n";
                Wizard *w = new Wizard[size];

                /*Go through the array and access all the methods 
                of the respective classes*/

                /*This will also print numerous constructor and 
                destructor statments.*/
                for(int i = 0; i < size; i++){

                    c[i].run();
            
                    w[i].run();
                    w[i].hover();

                }

                //Delete the dynamically allocated object array.
                delete []w;
                delete []c; 

                //To remove the 'enter' character.
                getchar();

            }   

            //Same thing as above for the Barbarian super class.
            else if(whichObject == "Barbarian"){

                cout << "Enter the size of the dynamic object array: ";
                cin >> size;

                cout << "Creating a Creature.\n";
                Creature *c = new Creature[size];

                cout << "\nCreating a Barbarian.\n";
                Barbarian *b = new Barbarian[size];

                for(int i = 0; i < size; i++){

                    c[i].run();

                    b[i].run();
                    b[i].sword();

                }

                delete []b;
                delete []c;

                getchar();

            }

            //Same thing as above for the Headhunter super class.
            else if(whichObject == "Headhunter"){

                cout << "Enter the size of the dynamic object array: ";
                cin >> size;

                cout << "Creating a Creature.\n";
                Creature *c = new Creature[size];

                cout << "\nCreating a Headhunter.\n";
                Headhunter *h = new Headhunter[size];

                for(int i = 0; i < size; i++){

                    c[i].run();

                    h[i].run();
                    h[i].card();

                }

                delete []h;
                delete []c;

                getchar();

            }
        }

        cout << endl;
        
    }

    return 0;

} 