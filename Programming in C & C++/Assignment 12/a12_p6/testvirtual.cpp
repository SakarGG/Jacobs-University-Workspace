/*
CH-230-A
a12 p12.6[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Perimeter.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 8;
int main() {
	
	Area *list[num_obj];						// (1)
	// Creates an object pointer array list of type Area.

	Perimeter *list2[num_obj];

	int index = 0;								// (2)
	// Used in while loop to go through the array above.

	double sum_area = 0.0;						// (3)
	// Assigning a default value because it changes itself later.
	double sum_perimeter = 0.0;

	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	// Creates blue_ring object of type Ring and implmenting parametric constructor.

	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);

	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);

	cout << "Creating Square: ";
	Square white_square("WHITE", 9);

	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);

	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);

	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	cout << "Creating Square: ";
	Square orange_square("ORANGE", 4);

	list[0] = &blue_ring;						// (5)
	// Puts that reference value in the first position of the array
	list2[0] = &blue_ring;		

	list[1] = &yellow_circle;
 	list2[1] = &yellow_circle;

	list[2] = &green_rectangle;
	list2[2] = &green_rectangle;

	list[3] = &white_square;
	list2[3] = &white_square;

	list[4] = &red_circle;
	list2[4] = &red_circle;

	list[5] = &black_rectangle;
	list2[5] = &black_rectangle;

	list[6] = &violet_ring;
	list2[6] = &violet_ring;

	list[7] = &orange_square;
	list2[7] = &orange_square;

				
	while (index < num_obj) {					// (7)
	// Go through the array one by one until size of num_obj.

		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)
		// Getting and assigning area in each position of the array.

		sum_area += area;

	}

	index = 0;

	while (index < num_obj) {					

		(list2[index])->getColor2();				
		double perimeter = list2[index++]->calcPerimeter();

		sum_perimeter += perimeter;

	}
	

	cout << endl << "\nThe total area is "
			<< sum_area << " units ";	// (9)
			// Sums up all the values at each position (sums up all the areas.)

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
