/*
CH-230-A
a12 p12.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include "Shapes.h"
#include <iostream>
#include <cmath>

using namespace std; 

//Parametric Constructor.
Shape::Shape(const string& n) : name(n){

	cout << "Parametric Constructor for Shape class" << endl;

}

//Default Constructor.
Shape::Shape(){

	name = "DEFAULT";
	cout << "Default Constructor for Shape class" << endl;

}

//Copy Constructor.
Shape::Shape(const Shape&s){

    name = s.name; 
    cout << "Copy Constructor for Shape class" << endl;

}	

//Parent method used in later inherited classes.
void Shape::printName() const{

	cout << name << endl;

}

//Setter.
void Shape::setName(string n){

	name = n;

}

//Getter.
string Shape::getName(){

    return name;

}

//Destructor.
Shape::~Shape(){

	cout << "Destructor for Shape class" << endl;

}



//Parametric Constructor.
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){

	x = nx;
	y = ny;
	cout << "Parametric Constructor for CenteredShape class" << endl;

}

//Default Constructor.
CenteredShape::CenteredShape(){
	
	x = 0;
	y = 0;
	cout << "Default Constructor for CenteredShape class" << endl;

}

//Copy Constructor.
CenteredShape::CenteredShape(const CenteredShape&cs){

	x = cs.x;
	y = cs.y;
    cout << "Copy Constructor for CenteredShape class" << endl;
	
}

//Move method for this class.
void CenteredShape::move(double nx, double ny){

	x += nx;
	y += ny;

}

//Setters.
void CenteredShape::setX(double nx){

	x = nx;

}

void CenteredShape::setY(double ny){

	y = ny;

}

//Getters.
double CenteredShape::getX(){

    return x;

}

double CenteredShape::getY(){

    return y;

}

//Destructor.
CenteredShape::~CenteredShape(){

	cout << "Destructor for CenteredShape class" << endl;

}



//Parametric Constructor.
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{

	EdgesNumber = nl;
	cout << "Parametric Constructor for RegularPolygon class" << endl;
	
}

//Default Constructor.
RegularPolygon::RegularPolygon(){

	EdgesNumber = 0;
	cout << "Default Constructor for RegularPolygon class" << endl;

}

//Copy Constructor.
RegularPolygon::RegularPolygon(const RegularPolygon&rp){

	EdgesNumber = rp.EdgesNumber;
    cout << "Copy Constructor for RegularPolygon class" << endl;

}

//Setter.
void RegularPolygon::setEdgesNumber(int nedgesnumber){

	EdgesNumber = nedgesnumber;

}

//Getter.
int RegularPolygon::getEdgesNumber(){

    return EdgesNumber;

}

//Destructor.
RegularPolygon::~RegularPolygon(){

	cout << "Destructor for RegularPolygon class" << endl;

}



//Parametric constructor.
Hexagon::Hexagon(const string& n, double nx, double ny, int nside) :
	RegularPolygon(n, nx, ny, 6)
{

	t = nside;
	cout << "Parametric Constructor for Hexagon class" << endl;

}

//Default constructor.
Hexagon::Hexagon(){

	t = 0;
	cout << "Default Constructor for Hexagon class" << endl;

}

//Copy constructor.
Hexagon::Hexagon(const Hexagon&hg){

	t = hg.t;
    cout << "Copy Constructor for Green Hexagon" << endl;
	
}

//Perimeter for Hexagon.
double Hexagon::perimeter(){

	double perimeter;
	perimeter = 6 * t;

	return perimeter;

}

//Area for Hexagon.
double Hexagon::area(){

	double area;
	area = (((3 * sqrt(3)) / 2) * pow(t, 2));

	return area;
	
}

//Setter.
void Hexagon::setSide(double nside){

	t = nside;

}

//Getter.
double Hexagon::getSide(){

    return t;

}

//Destructor.
Hexagon::~Hexagon(){

	cout << "Destructor for Hexagon class" << endl;

}