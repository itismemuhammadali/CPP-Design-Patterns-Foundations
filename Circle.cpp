#ifndef Circle_cpp
#define Circle_cpp

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

#include "ShapeManager.cpp"

using namespace std;
class Circle : public ShapeManager  // This class doesnot follows the Single Responsibility Principle. 
//This class overrides methods to "draw a circle" take "input" and then perform task to "calculate area" and "calculate volume".
//I have suggestion that we create separate classes to override these methods.
//For example a circle drawer class a circle input class and then a circle volume and a circle area.
{
    private:
        double radius;
        double height;
        
        double area;
        double volume;

    public:
        
        void draw() override
        {
            cout << "circle" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter Circle Radius" << endl;
            cin >> radius;
            cout << "Enter Circle Height" << endl;
            cin >> height;
        }

        double calculateArea() override
        {
            area = M_PI * radius * radius;
            return area;
        }

        double calculateVolume() override
        {
            volume = M_PI * radius * 2 * height ;
            return volume;
        }
};
#endif