/*
CH-230-A
a11 p11.5[h]
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

//a-f prompts in the question:

//a. All classes have default constructors,
//b. All classes have their respective setters and getters,
//c. Specific constructors created for Rectangle and Square class,
//d. All classes have copy constructors,
//e. Perimeter and Area methods for the definite shape classes,
//f. in testshapes.cpp

//All the following classes have properties mentioned in a-e.
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

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:

		//Parametric Constructor.
		Circle(const std::string&, double, double, double);

		//Default Constructor.
		Circle();

		//Copy Constructor.
		Circle(const Circle&);

		//Math.
		double perimeter();
		double area();

		//Setter.
        void setRadius(double nradius);

        //Getter.
        double getRadius();

		//Destructor.
		~Circle();
};

//Extension to the Shapes program: with a Rectangle class and a Square class.
//Regular Polygon -> Rectangle -> Square.
class Rectangle : public RegularPolygon { // a Rectangle is a shape with a height and a width
	private:
		double Width;
		double Height;
	public:

		//Parametric Constructor.
		Rectangle(const string& n, double nx, double ny, double nwidth, double nheight); 

		//Default Constructor.
		Rectangle();

		//Copy Constructor.
		Rectangle(const Rectangle&);

		//Math.
		double perimeter();
		double area();

		//Setters.
        void setWidth(double nwidth);
		void setHeight(double nheight);

        //Getters.
        double getWidth();
		double getHeight();

		//Destructor.
		~Rectangle();
};

class Square : public Rectangle { // a Square is a shape with only a side length
	private:
		double Side;
	public:

		//Parametric Constructor.
		Square(const string& n, double nx, double ny, double nside);

		//Default Constructor.
		Square();

		//Copy Constructor.
		Square(const Square&);

		//Math.
		double perimeter();
		double area();

		//Setter.
        void setSide(double nside);

        //Getter.
        double getSide();

		//Destructor.
		~Square();
};
    
#endif