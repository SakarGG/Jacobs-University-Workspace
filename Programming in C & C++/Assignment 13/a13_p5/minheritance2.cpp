/*
CH-230-A
a13 p13.5[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A{
  
  int x;

  public:

    A(){x = 20;}
    A(int i) {x = i;}

  void print() {cout << x;}

};
 

class B: virtual public A{

  public:
    B():A(10) {}

};
 

class C: virtual public A{

  public:
    C():A(10) {}

};
 

class D: public B, public C {

  public:
  D(){}

};
 
int main(){
  
  D d;
  d.print();

  return 0;

}

/*

ERROR MESSAGE:

error: implicit default constructor for 'D' must explicitly initialize the 
base class 'A' which does not have a default
      constructor
class D: public B, public C {};
      ^
minheritance2.cpp:39:5: note: in implicit default constructor for 'D' first 
required here
  D d;
    ^
minheritance2.cpp:11:7: note: 'A' declared here
class A{
      ^
1 error generated.

*/


/*

REASONING:

Simple putting (Class) (Object) (semicolon) (D d;) invokes the default 
constructor. Class D inherits from thegrandparent class, A and since 
class A itself didn't have a default constructor in its public, 
its absence throws an error.

Therefore, the solution would be to add a default constructor in the 
grandparent class and also a default constructor in the grandchild class
so that the task in the main file is achieved.

*/