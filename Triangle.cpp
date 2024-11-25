#ifndef Triangle_cpp
#define Triangle_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Triangle : public Shape  
//Responsibility: This class provides concrete implementation for abstract methods declared in abstract classes shape, Input, Area, and Volume.
//This class doesnot follows the Single Responsibility Principle. 
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