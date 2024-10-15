#ifndef Square_cpp
#define Square_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Square : public Shape , public Input
{
public:
    void drawShape() override
    {
        cout << "square" << endl;
    }

    int inputLength() override 
    {
        int length;
        cout << "Enter Length" << endl;
        cin >> length;
        return length;
    }
    int CalculateArea() override
    {
        int length = inputLength ();
        int width = inputLength ();
        int area;
        area = length * width;
        cout << "Area = " << area;
        return area;
    }
};

#endif