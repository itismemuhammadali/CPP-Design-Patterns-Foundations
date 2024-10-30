#ifndef Triangle_cpp
#define Triangle_cpp

#include <iostream>

#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Triangle : public Shape
{
    private:
        double base;
        double height;
        double length;

        double area;
        double volume;

    public:
        
        void drawShape() override
        {
            cout << "triangle" << endl;
        }

        void input() override
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