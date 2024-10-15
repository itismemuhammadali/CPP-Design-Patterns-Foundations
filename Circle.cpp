#ifndef Circle_cpp
#define Circle_cpp

#define _USE_MATH_DEFINES

#include <iostream>
#include <math>

#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;
class Circle : public Shape , public Input
{
public:
    void drawShape() override
    {
        cout << "circle" << endl; 
    }
    int inputRadius() override 
    {
        int radius;
        cout << "Enter Circle Radius" << endl;
        cin >> radius;
        return radius;
    }
    int CalculateArea() override
    {
        int radius = inputRadius ();
        int area;
        area = M_PI * radius * radius;
        cout << "Area = " << area;
        return area;
    }
};
#endif