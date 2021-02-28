/*
CH-230-A
a11 p11.5[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv){

  //To invoke the default constructor.
  Circle cd;
  //Normal parametric constructor.
  Circle c("first circle", 3, 4, 7);

  RegularPolygon rd;
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  Rectangle red;
  Rectangle re("RECTANGLE", 1, 2, 3, 4);

  Square sd;
  Square s("SQUARE", 5, 6, 7);

  //Using the parent class method.
  cd.printName();
  //Using two math methods to all three classes using correct syntax.
  cout << "The Area of the Default Circle is: " << cd.area() << endl;
  cout << "The Circumerence of the Default Circle is: " << cd.perimeter() << endl;
  c.printName();
  cout << "The Area of the Circle is: " << c.area() << endl;
  cout << "The Circumerence of the Circle is: " << c.perimeter() << endl;

  //These class objects don't have math.
  rd.printName();
  r.printName();

  //Same as circle class.
  red.printName();
  cout << "The Area of the Default Rectangle is: " << red.area() << endl;
  cout << "The Perimeter of the Default Rectangle is: " << red.perimeter() << endl;
  re.printName();
  cout << "The Area of the Rectangle is: " << re.area() << endl;
  cout << "The Perimeter of the Rectangle is: " << re.perimeter() << endl;

  sd.printName();
  cout << "The Area of the Default Square is: " << sd.area() << endl;
  cout << "The Perimeter of the Default Square is: " << sd.perimeter() << endl;

  s.printName();
  cout << "The Area of the Square is: " << s.area() << endl;
  cout << "The Perimeter of the Square is: " << s.perimeter() << endl;

  return 0;

}