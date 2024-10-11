#ifndef Circle_cpp
#define Circle_cpp
#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
using namespace std;
class Circle : public Shape
{
public:
    void drawShape() override
    {
        cout << "circle" << endl;
        CaculateCircleArea();
    }
};
#endif