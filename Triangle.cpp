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
        }

        double calculateArea() override
        {
            double area;
            area = (base * height)/2;
            return area;
        }
};
#endif