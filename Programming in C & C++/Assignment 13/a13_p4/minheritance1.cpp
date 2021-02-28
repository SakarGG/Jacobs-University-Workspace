/*
CH-230-A
a13 p13.4[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A{
    
    int x;

    public:
        void setX(int i) {x = i;}
        void print() { cout << x; }

};

class B:  virtual public A{
    
    public:
        B()  { setX(10); } 
};
 
class C:  virtual public A {

    public:
        C()  { setX(20); } 

};
 
class D:  public B, public C {};
 
int main(){

    D d;
    d.print();
    
    return 0;

}

/*

ERROR MESSAGE:

error: non-static member 'print' found in multiple base-class subobjects of 
type 'A':
    class D -> class B -> class A
    class D -> class C -> class A
    d.print();
      ^
minheritance1.cpp:17:14: note: member found by ambiguous name lookup
        void print() { cout << x; }
             ^
1 error generated.

*/

/*
REASONING:

class B takes the print() method from the parent class A,
class C also takes the print() method from the parent class.

Since class D inherits both B and C, the compiler doesn't know which 
method to use as it creates ambiguity. It is impossible for the compiler
to resolve ambiguity.

The other problem is the layout of physical object in memory and the methods
are accessed through them. Having multi inheritance makes it impossible to 
differentiate one from the other.

The solution to this is to make the inheritance virtual.
It makes the virtual base a common subobject for the 
deriving class and all classes that are derived from it. 
This is used to avoid the diamond problem by clarifying 
ambiguity over which ancestor class to use.

Also, it only prints the value from class C as the order in which the 
classes are inherited matters and would mean that the D class is the child of
B and C but inherites from C because it is called later.
*/