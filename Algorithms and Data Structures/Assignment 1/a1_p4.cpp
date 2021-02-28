/*
CH-231-A
a1 p1.4[cpp]
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

    //Iterates until "END" is typed.
    while(1){

        //Input.
        cin >> word;

        //Stop program once END is typed.
        if(word == "END"){

            break;

        }

        //Input word to vector.
        sVector.push_back(word);

    }

    //Printing with index.
    for(int i = 0; i < sVector.size(); i++){

        cout << sVector[i] << " "; 

    }

    cout << endl;

    //Printing with iterator.
    for (it = sVector.begin(); it != sVector.end(); it++){

        cout << *it;

        if(it != sVector.end() - 1){

            cout << ", ";

        }

    }

    cout << endl;

    return 0;

}