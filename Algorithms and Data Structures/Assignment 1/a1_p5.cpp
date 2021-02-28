/*
CH-231-A
a1 p1.5[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
    //To store words.
    vector <string> sVector;

    //Iterator.
    vector <string> :: iterator it;

    //What to read.
    string word;

    //Check if at least 5 elements exist.
    int elem = 5;

    //Iterates until "END" is typed.
    while(1){

        //Input with white spaces and tabs.
        getline(cin, word);

        //Stop program once END is typed.
        if(word == "END"){

            break;

        }

        //Input word to vector.
        sVector.push_back(word);

    }

    //Swap the 2nd and 5th elemnent if it exists
    if ((elem > 0 && elem < sVector.size())){ //&& (sVector[elem] != NULL)){

        swap(sVector[1], sVector[4]);

    }

    else{

        cout << "One or both of them do not exist";

    }

    //Replacing the last element with question marks.
    sVector[sVector.size() - 1] = "???";

    //Printing with index, separated by commas.
    for(int i = 0; i < sVector.size(); i++){

        cout << sVector[i];

        if(i != sVector.size() - 1){

            cout << ", ";

        }

    }

    cout << endl;

    //Printing with iterator, separated by semicolons.
    for (it = sVector.begin(); it != sVector.end(); it++){

        cout << *it;

        if(it != sVector.end() - 1){

            cout << "; ";

        }

    }

    cout << endl;

    //Printing in reverse with iterator, separated by spaces.
    for (it = sVector.end() - 1; it >= sVector.begin(); it--){

        cout << *it;

        if(it != sVector.end() - 1){

            cout << " ";

        }

    }

    cout << endl;

    return 0;

}