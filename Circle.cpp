#ifndef Circle_cpp
#define Circle_cpp

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;
class Circle : public Shape, public Input
{

    private:
        double radius;
        double area;

    public:
        Circle()
        {
            input();
        }
        void drawShape() override
        {
            cout << "circle" << endl;
        }

        void input() override
        {
            cout << "Enter Circle Radius" << endl;
            cin >> radius;
        };

        double calculateArea() override
        {
            area = M_PI * radius * radius;
            return area;
        }
};
#endif