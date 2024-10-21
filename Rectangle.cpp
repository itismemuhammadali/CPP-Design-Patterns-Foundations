#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Rectangle :  public Shape , public Input
{
public:
    void drawShape() override
    {
        cout << "rectangle" << endl;
    }
    int calculateArea() override
    {
        int length = inputLength ();
        int width = inputWidth ();
        int area;
        area = length * width;
        cout << "Area = " << area;
        return area;
    }
};
#endif