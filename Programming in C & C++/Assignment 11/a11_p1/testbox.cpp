/*
CH-230-A
a11 p11.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Box.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){

    //Properties of box.
    double height, width, depth, volume;

    //Dynamically allocating class objects.
    int n;
    cout << "Enter the number of boxes: ";
    cin >> n;

    Box *BoxArray = new Box[2 * n];

    //Setting the properties for each box object.
    for(int i = 0; i < n; i++){

        cout << "Enter the height: ";
        cin >> height;
        BoxArray[i].setHeight(height);

        cout << "Enter the width: ";
        cin >> width;
        BoxArray[i].setWidth(width);

        cout << "Enter the depth: ";
        cin >> depth;
        BoxArray[i].setDepth(depth);

        BoxArray[n + i] = Box(BoxArray[i]);

    }

    //Calling the print method to print the volume of each box.
    for(int i = 0; i < n; i++){
        
        BoxArray[i].print();
        
    }

    for(int i = n; i < 2*n; i++){

        volume = BoxArray[i].getHeight() * BoxArray[i].getWidth() * BoxArray[i].getDepth();
        cout << "The volume of the box is " << volume << endl;
        
    }

    //Deallocating dynamic memory allocation.
    delete []BoxArray;

    return 0;

}
