/*
CH-230-A
a12 p12.7[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Area.h"
#include "Perimeter.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

//Number of objects of the class
const int num_obj = 25;

//Random number between 5 and 100.
//The values for variables in 4 different shapes.
int random5100(){

	return rand()%95 + 5;

}


//Random number between 0 and 3
//To choose shape and color.
int random03(){

	return rand()%4;

}


int main() {

	string whichColor[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
	string whichShape[4] = {"Circle", "Ring", "Rectangle", "Square"};

	//Random seed.
	unsigned int seed;
	cout << "Provide a random seed:";
	cin >> seed;
	srandom(seed);
	
	//Creating pointer object required for polymorphism.
	Area *list[num_obj];						
	Perimeter *list2[num_obj];

	int index2 = 0;

	double sum_area = 0.0;						
	double sum_perimeter = 0.0;

	//Go through the object array, until 25 in this case.
	for(int index = 0; index < num_obj; index++){

		//Choose one of the shapes 
		string specificShape = whichShape[random03()];

		if(specificShape == "Circle"){
			
			//Choose one of the colors.
			string specificColor = whichColor[random03()];

			//Convert string to char array because the parameter is a 
			//const char*
			int n = specificColor.length();
			char color[n + 1];
			specificColor.copy(color, n);  

			//Get number from 5 to 100.
			int size = random5100();

			//Creates new Circle object and puts in the array.
			Circle color_circle(color, size);
			list[index] = &color_circle;
			list2[index] = &color_circle;

		}

		if(specificShape == "Ring"){
			
			//Same process but with Ring shape
			string specificColor = whichColor[random03()];

			int n = specificColor.length();
			char color[n + 1];
			specificColor.copy(color, n);  

			//Two values because it has two variables.
			int size1 = random5100();
			int size2 = random5100();

			//If outerradius is smaller than innerradius.
			if(size1 < size2){
				int temp = size2;
				size2 = size1;
				size1 = temp;
			}

			//Creates new Ring object and puts in the array.
			Ring color_ring(color, size1, size2);
			list[index] = &color_ring;
			list2[index] = &color_ring;

		}

		if(specificShape == "Rectangle"){

			string specificColor = whichColor[random03()];

			int n = specificColor.length();
			char color[n + 1];
			
			specificColor.copy(color, n); 

			int size1 = random5100();
			int size2 = random5100();

			//If length is smaller than width.
			if(size1 < size2){
				int temp = size2;
				size2 = size1;
				size1 = temp;
			}

			//Creates new Rectangle object and puts in the array.
			Rectangle color_rectange(color, size1, size2);
			list[index] = &color_rectange;
			list2[index] = &color_rectange;

		}

		if(specificShape == "Square"){

			string specificColor = whichColor[random03()];

			int n = specificColor.length();
			char color[n + 1];
			
			specificColor.copy(color, n);  

			int size = random5100();

			//Creates new Square object and puts in the array.
			Square color_square(color, size);
			list[index] = &color_square;
			list2[index] = &color_square;

		}

	}

	//Calculate Total Area.
	while (index2 < num_obj) {					

		(list[index2])->getColor();				
		double area = list[index2++]->calcArea();
		
		cout << endl << "The area for this object is: " << area << endl;
		sum_area += area;

	}

	index2 = 0;

	//Calculate total Perimeter.
	while (index2 < num_obj) {					

		(list2[index2])->getColor2();				
		double perimeter = list2[index2++]->calcPerimeter();

		cout << endl << "The perimeter for this object is: " << perimeter << endl;
		sum_perimeter += perimeter;

	}
	

	//Print total Area and Perimeter.
	cout << endl << "\nThe total area is "
			<< sum_area << " units ";	

	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;

	return 0;

}

/*

|-----------------------------------------------------------------------------------------------------------------| 
|																											      |
|                                   +------------------+  +-------------------+								      |
|                                   |                  |  |                   |   							      |
|   +------------------------------>+       Area       |  |     Perimeter     +<------------------------------+   |
|   |                               |                  |  |                   |                               |   |
|   |                               +---+----------+---+  +---+-----------+---+                               |   |
|   |     +-----------------------+     ^          ^          ^           ^     +-----------------------+     |   |
|   |     |                       +-----+          |          |           +-----+                       |     |   |
|   |     |        Circle         +----------------+----------+-----------------+       Rectangle       |     |   |
|   |     |                       |                                             |                       |     |   |
|   |     +-----------+-----------+<----+                                 +---->+-----------+-----------+     |   |
|   |                 ^                 |                                 |                 ^                 |   |
|   |     +-----------+-----------+     |                                 |     +-----------+-----------+     |   |
|   |     |                       |     |                                 |     |                       |     |   |
|   |     |          Ring         |     |                                 |     |         Square        |     |   |
|   |     |                       |     |                                 |     |                       |     |   |
|   |     +-----------------------+ +---+---------------------------------+---+ +-----------------------+     |   |
|   |                 ^-------------+                                         +-------------^                 |   |
|   |                               |               testvirtual               |                               |   |
|   +-------------------------------+                                         +-------------------------------+   |
|                                   +-----------------------------------------+								      |
|																											      |
|-----------------------------------------------------------------------------------------------------------------|

*/