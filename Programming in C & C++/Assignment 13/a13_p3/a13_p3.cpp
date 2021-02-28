/*
CH-230-A
a13 p13.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){

    int n;
    char fileName[50];
    
    cout << "Enter the number of files you want to open: ";
    cin >> n;

    ifstream myFile;
    ofstream myConcat;
    string line;

    //Opening the new file in binary and checking if it opened.
    myConcat.open("concatn.txt", ios::binary | ios::out);
    if(!myConcat){

        cout << "Error opening the file." << endl;
        myConcat.close();
        getchar();
        exit(1);

    }

    else{

        //Input file names to concat.
        for(int i = 0; i < n; i++){

            cin >> fileName;

            //After all files entered, go through each file.
            //Open the preexisting file in binary.
            myFile.open(fileName, ios::binary | ios::in);
            
            if(!myFile){

                cout << "Error opening the file." << endl;
                myFile.close();
                getchar();
                exit(1);

            }

            else{
                
                int size = 0;
                char buf[100];

                myFile.seekg(0, ios::end);
                size = (int) myFile.tellg();
                myFile.seekg(0, ios::beg);

                //From each of the file, copy with buffer.
                for(int i = 0; i < size; i++){

                    myFile.read(buf, size);
                    myConcat.write(buf, myFile.gcount());

                }  

                //To separate the files with a newline;
                myConcat << endl;

            }

            //Closing after objective is complete.
            myFile.close();

        }
        
        myConcat.close();
        
    }

    cout << "The files have been successfully concatenated to concatn.txt" << endl;

    return 0;

}