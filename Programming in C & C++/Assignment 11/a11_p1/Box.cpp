/*
CH-230-A
a11 p11.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

using namespace std;

//Default constructor
Box::Box(){

    height = 0;
    width = 0;
    depth = 0;

}


//Using copy constructor.
Box::Box(const Box&b){

    height = b.height;
    width = b.width;
    depth = b.depth;
    
    cout << "Using Copy Constructor now" << endl;

}


//Properties of box.
Box::Box(double newheight, double newwidth, double newdepth){

    height = newheight;
    width = newwidth;
    depth = newdepth;

}


//Setting the properties.
void Box::setHeight(double newheight){

	height = newheight;

}


void Box::setWidth(double newwidth){

	width = newwidth;

}


void Box::setDepth(double newdepth){

	depth = newdepth;

}


//Getting the properties.
double Box::getHeight(){

    return height;

}


double Box::getWidth(){

    return width;

}


double Box::getDepth(){

    return depth;

}


//Printing the volume.
void Box::print(){
    
    cout << "The volume of the box is " << Volume(height, width, depth) << endl;

}


double Box::Volume(double newheight, double newwidth, double newdepth){

    return newheight * newwidth * newdepth;

}


//Destructor simulator.
Box::~Box(){

    cout << "Using Destructor now" << endl;

}