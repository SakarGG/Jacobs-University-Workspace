/*
CH-230-A
a10 p10.7[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
	//Destructor.
	~NaiveString();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "parametric constructor being used" << endl;
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	cout << "copy constructor being used" << endl;
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString &s){

	cout << "funcbyref() being called" << endl;
	s.update('a', 'e');
	s.print();

}

NaiveString::~NaiveString(){

	cout << "destructor being called" << endl;
	delete []str;

}

int main(int argc, char** argv)
{
	NaiveString a("aBaBaB");
	NaiveString b(a);

	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

	b.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(b);
	b.print();

	return 0;
	
}