/*
CH-230-A
a11 p11.1[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <string>

using namespace std;

class Box{

    //Private properties.
    private:

        double height;  
	    double width; 
        double depth;  

    public:

        //Empty constructor.
        Box();
        //Constructor which sets data members.
        Box(double newheight, double newwidth, double newdepth);
        //Copy constructor.
        Box(const Box &b);
        
        //Setters.
        void setHeight(double newheight);
        void setWidth(double newwidth);
        void setDepth(double newdepth);

        //Getters.
        double getHeight();
        double getWidth();
        double getDepth();
        double Volume(double newheight, double newwidth, double newdepth);

        //Printer.
        void print();

        //Destructor.
        ~Box(); 

};
