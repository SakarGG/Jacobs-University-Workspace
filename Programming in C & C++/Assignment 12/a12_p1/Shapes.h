/*
CH-230-A
a12 p12.1[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape {			    // base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:

		//Parametric Constructor.
		Shape(const std::string&);  // builds a shape with a name

		//Default Constructor.
		Shape();					// empty shape

		//Copy Constructor.
		Shape(const Shape&);		// copy constructor

		//Action/Method.
		void printName() const ;  	// prints the name  

		//Setters.
        void setName(string n);

        //Getters.
        string getName();

		//Destructor.
		~Shape();
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:

		//Parametric Constructor.
		CenteredShape(const std::string&, double, double);  // usual three constructors

		//Default Constructor.
		CenteredShape();

		//Copy Constructor.
		CenteredShape(const CenteredShape&);

		//Action/Method taken from the parent class.
		void move(double, double);	// moves the shape, i.e. it modifies it center

		//Setters.
        void setX(double nx);
		void setY(double ny);

        //Getters.
        double getX();
		double getY();

		//Destructor.
		~CenteredShape();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:

		//Parametric Constructor.
		RegularPolygon(const std::string&, double, double, int);

		//Default Constructor.
		RegularPolygon();

		//Copy Constructor.
		RegularPolygon(const RegularPolygon&);

		//Setter.
        void setEdgesNumber(int nedgesnumber);

        //Getter.
        int getEdgesNumber();

		//Destructor.
		~RegularPolygon();
};

class Hexagon : public RegularPolygon {
    private:
        double t;
    public:

		//Parametric Constructor.
        //Hexagon(const std::string&, double, double, double);
		Hexagon(const string& n, double nx, double ny, int nside);

		//Default Constructor.
		Hexagon();

		//Copy Constructor.
		Hexagon(const Hexagon&);

		//Math.
        double perimeter();
        double area();

		//Setters.
        void setSide(double nside);

		//Getters.
        double getSide();

		//Destructor.
		~Hexagon();   
};
    
#endif