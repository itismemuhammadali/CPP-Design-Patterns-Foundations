#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Rectangle : public Shape
{
    private:
        double length;
        double width;

    public:
        
        void drawShape() override
        {
            cout << "rectangle" << endl;
        }

        void input() override
        {
            cout << "Enter Length" << endl;
            cin >> length;
            cout << "Enter Width" << endl;
            cin >> width;
        }

        double calculateArea() override
        {
            double area;
            area = length * width;
            return area;
        }
};
#endif