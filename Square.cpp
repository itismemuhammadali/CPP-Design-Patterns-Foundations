#ifndef Square_cpp
#define Square_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Square : public Shape
{
    private:
        double length;
        double area;

    public:

        void drawShape() override
        {
            cout << "square" << endl;
        }

        void input() override
        {
            cout << "Enter Length" << endl;
            cin >> length;
        }

        double calculateArea() override
        {
            area = length * length;
            return area;
        }
};

#endif