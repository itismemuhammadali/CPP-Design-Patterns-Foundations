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
        CaculateRectangleArea();
    }
};
#endif