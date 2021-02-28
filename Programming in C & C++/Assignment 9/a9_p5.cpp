/*
CH-230-A
a9 p9.5[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(){

    //All necessary variables.
    string fullName;
    int randomNumber, ZeroTo100, playerGuess, count = 0;

    //Possible to enter with spaces.
    cout << endl << "Enter your full name: ";
    getline(cin, fullName);

    /*Generate a random number from 1 to 100 
    based on the current computer ticks.*/
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand();
    ZeroTo100 = (randomNumber % 100) + 1;

    
    //        !! Test for program !!
    cout << endl << ZeroTo100 << endl << '\n';
    

    while(1){

        //Everyone it loops, count.
        count++;

        cout << "Enter your guess: ";
        cin >> playerGuess;

        //If guess is below.
        if(playerGuess < ZeroTo100){

            cout << "Too Low!" << endl;

        }

        //If guess is above.
        else if(playerGuess > ZeroTo100){

            cout << "Too High!" << endl;

        }

        else{

            //Using endl to format the texts and display the required infos.
            cout << endl << "Wow " << fullName << ", you can really guess!" << endl 
                 << "It took you " << count << " attempt(s) tho." << endl << '\n' 
                 << "GG" << endl << '\n';

            break;

        }

    }

    return 0;

}