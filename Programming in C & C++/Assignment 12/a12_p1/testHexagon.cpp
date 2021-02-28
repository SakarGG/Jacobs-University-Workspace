/*
CH-230-A
a12 p12.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  
  //To invoke the Default constructor.
  Hexagon hd;

  //Two parametric constructors.
  Hexagon hb("BLUE", 1, 2, 9);
  Hexagon hg("GREEN", 2, 1, 15);

  //To invoke the Copy constructor.
  Hexagon hgc(hg);
  //The following line copies the name as well.
  hgc = hg;

  //Printers for their respective values.
  hd.printName();
  cout << "The Area of the Default Hexagon is: " << hd.area() << endl;
  cout << "The Perimeter of the Default Hexagon is: " << hd.perimeter() << endl;

  hb.printName();
  cout << "The Area of the Blue Hexagon is: " << hb.area() << endl;
  cout << "The Perimeter of the Blue Hexagon is: " << hb.perimeter() << endl;

  hg.printName();
  cout << "The Area of the Green Hexagon is: " << hg.area() << endl;
  cout << "The Perimeter of the Green Hexagon is: " << hg.perimeter() << endl;

  hgc.printName();
  cout << "The Area of the Copied Green Hexagon is: " << hgc.area() << endl;
  cout << "The Perimeter of the Copied Green Hexagon is: " << hgc.perimeter() << endl;

  return 0;

}