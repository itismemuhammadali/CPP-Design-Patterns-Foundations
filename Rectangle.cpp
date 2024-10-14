#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"

using namespace std;

class Rectangle : public Shape
{
public:
    void drawShape() override
    {
        cout << "rectangle" << endl;
    }
    int inputAndCalculateArea() override
    {
        int length, width, area;
        cout << "Enter Rectangle Dimensions" << endl;
        cout << "Enter Length" << endl;
        cin >> length;
        cout << "Enter Width" << endl;
        cin >> width;
        area = length * width;
        cout << "Area = " << area;
        return 0;
    }
};
#endif