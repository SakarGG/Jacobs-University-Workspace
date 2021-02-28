/*
CH-230-A
a11 p11.5[cpp]
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



//Parametric Constructor.
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{

	Radius = r;
	cout << "Parametric Constructor for Circle class" << endl;

}

//Default Constructor.
Circle::Circle(){

	Radius = 0;
	cout << "Default Constructor for Circle class" << endl;

}

//Copy Constructor.
Circle::Circle(const Circle&c){

	Radius = c.Radius;
    cout << "Copy Constructor for Circle class" << endl;

}

//Area for Circle.
double Circle::area(){

	return M_PI * pow(Radius, 2);

}

//Circumference for Circle.
double Circle::perimeter(){

	return 2 * M_PI * Radius;

}

//Setetr.
void Circle::setRadius(double nradius){

	Radius = nradius;

}

//Getter.
double Circle::getRadius(){

    return Radius;

}

//Destructor.
Circle::~Circle(){

	cout << "Destructor for Circle class" << endl;

}



//Parametric Constructor.
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : 
  RegularPolygon(n, nx, ny, 4)
{

	Width = nwidth;
	Height = nheight;
	cout << "Parametric Constructor for Rectangle class" << endl;

}

//Default Constructor.
Rectangle::Rectangle(){

	Width = 0;
	Height = 0;
	cout << "Default Constructor for Rectangle class" << endl;

}

//Copy Constructor.
Rectangle::Rectangle(const Rectangle&re){

	Width = re.Width;
	Height = re.Height;
    cout << "Copy Constructor for Rectangle class" << endl;

}

//Area for Rectangle.
double Rectangle::area(){

	return Width * Height;

}

//Perimeter for Rectangle.
double Rectangle::perimeter(){

	return 2 * (Width + Height);

}

//Setters.
void Rectangle::setWidth(double nwidth){

	Width = nwidth;

}

void Rectangle::setHeight(double nheight){

	Height = nheight;

}

//Getters.
double Rectangle::getWidth(){

    return Width;

}

double Rectangle::getHeight(){

    return Height;

}

//Destructor.
Rectangle::~Rectangle(){

	cout << "Destructor for Rectangle class" << endl;

}



//Parametric Constructor.
Square::Square(const string& n, double nx, double ny, double nside) :
  Rectangle(n, nx, ny, nside, nside)
{
	
	Side = nside;
	cout << "Parametric Constructor for Square class" << endl;

}

//Default Constructor.
Square::Square(){

	Side = 0;
	cout << "Default Constructor for Square class" << endl;

}

//Copy Constructor.
Square::Square(const Square&s){

	Side = s.Side;
    cout << "Copy Constructor for Square class" << endl;

}

//Area for Square.
double Square::area(){

	return Side * Side;

}

//Perimeter for Square.
double Square::perimeter(){

	return 4 * Side;

}

//Setter.
void Square::setSide(double nside){

	Side = nside;

}

//Getter.
double Square::getSide(){

    return Side;

}

//Destructor.
Square::~Square(){

	cout << "Destructor for Square class" << endl;

}