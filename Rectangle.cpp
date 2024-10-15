#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Rectangle : public Shape , public Input
{
public:
    void drawShape() override
    {
        cout << "rectangle" << endl;
    }
    int inputLength() override 
    {
        int length;
        cout << "Enter Length" << endl;
        cin >> length;
        return length;
    }
    int inputWidth() override 
    {
        int width;
        cout << "Enter Width" << endl;
        cin >> width;
         return width;
    }
    int CalculateArea() override
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