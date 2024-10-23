#ifndef Circle_cpp
#define Circle_cpp

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;
class Circle : public Shape , public Input
{
    private:
        int radius = inputRadius ();
        double area;

    public:
        void drawShape() override
            {
                cout << "circle" << endl; 
            }

    int calculateArea() override
    {
        area = M_PI * radius * radius;
        cout << "Area: " << area;
        return area;
    }
};
#endif