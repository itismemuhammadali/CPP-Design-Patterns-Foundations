#ifndef Triangle_cpp
#define Triangle_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Triangle : public ShapeManager   // This class doesnot follows the Single Responsibility Principle. 
//This class overrides methods to "draw a Triangle" take "input" and then perform task to "calculate area" and "calculate volume".
//I have suggestion that we create separate classes to override these methods.
//For example a Triangle drawer class a Triangle input class and then a Triangle volume and a Triangle area.
{
    private:
        double base;
        double height;
        double length;

        double area;
        double volume;

    public:
        
        void draw() override
        {
            cout << "triangle" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter base" << endl;
            cin >> base;
            cout << "Enter height" << endl;
            cin >> height;
            cout << "Enter length" << endl;
            cin >> length;
        }

        double calculateArea() override
        {
            area = (base * height)/2;
            return area;
        }

         double calculateVolume() override
        {
            volume = (base * height * length)/2;
            return volume;
        }
};
#endif