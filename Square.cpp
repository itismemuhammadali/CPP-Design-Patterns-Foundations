#ifndef Square_cpp
#define Square_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Square : public Shape, public Input
{
    private:
        double length = input();
        double area;

    public:
        void drawShape() override
        {
            cout << "square" << endl;
        }

        double input() override
        {
            cout << "Enter Length" << endl;
            cin >> length;
            return length;
        };

        double calculateArea() override
        {
            area = 2 * length;
            cout << "Area : " << area;
            return area;
        }
};

#endif