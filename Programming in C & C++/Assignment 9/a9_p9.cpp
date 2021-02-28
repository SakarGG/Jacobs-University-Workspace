/*
CH-230-A
a9 p9.9[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

/*Using function as the there needs 
to be function call within the function.*/
void guessgame(){

    int randomNumber, ZeroTo16, count = 0, size;

    string words[17] = {"computer", "television", "keyboard", 
                        "laptop", "mouse", "glance", 
                        "order", "plain", "circumstance", 
                        "red", "false", "manner",
                        "garbage", "multimedia", "illustrate",
                        "refrigerator", "recommendation"};

    string playerGuess;
    string playAgain;

    //Get a random number between 0 and 16.
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand();
    ZeroTo16 = (randomNumber % 16);

    //Get the word at that index form the array.
    string guessWordOriginal = words[ZeroTo16];
    size = guessWordOriginal.size();

    //Make a copy of the chosen word as it'll be morphed later.
    string guessWord = guessWordOriginal;
    
    //Convert vowels to underscores.
    for(int i = 0; i < size; i++){

        if(guessWord.at(i) == 'a' || guessWord.at(i) == 'e' || 
           guessWord.at(i) == 'i' || guessWord.at(i) == 'o' || 
           guessWord.at(i) == 'u' || guessWord.at(i) == 'A' || 
           guessWord.at(i) == 'E' || guessWord.at(i) == 'I' ||
           guessWord.at(i) == 'O' || guessWord.at(i) == 'U')  {

               guessWord.at(i) = '_';

        }

    }

    //Appearance.
    cout << endl << "            ☆☆☆ Guess The Word ☆☆☆";
    cout << endl << "Game Rules: Enter \"quit\" whenever you want to stop" << endl << endl;

    //Hint.
    cout << "Here's a hint: " << guessWord << endl << endl;

    //Infinite loop until quit is entered.
    cout << "Enter your guess: ";
    while(1){

        //Everyone it loops, count.
        count++;
        cin >> playerGuess;

        //If player wants to quit at the start.
        if(playerGuess == "quit"){

            cout << "gg" << endl;
            exit(0);

        }

        else{
            
            //If the guess matches.
            if(playerGuess == guessWordOriginal){

                //Appearance.
                cout << endl << "You guessed it!";

                cout << endl << "It took you: " << count << " attempt(s)!"<< endl << endl;
                cout << "Do you want to continue?" << endl;
                cout << "Enter \"quit\" to quit or type anything else to continue: ";
                
                //If player wants to quit midgame.
                cin >> playAgain;
                
                if(playAgain == "quit"){

                    cout << "gg!" << endl;
                    exit(0);

                }

                //Function call inside function. 
                else{
                    
                    guessgame();

                }

            }

            else{
                
                //Keep trying until correctly guessed.
                cout << "Wrong guess! Keep trying" << endl << endl;
                cout << "Enter your guess: ";

            }

        }

        

    }

}


//Just call it.
int main(){

    guessgame();

    return 0;

}