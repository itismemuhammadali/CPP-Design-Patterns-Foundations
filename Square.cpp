#ifndef Square_cpp
#define Square_cpp
#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
using namespace std;

class Square : public Shape
{
public:
    void drawShape() override
    {
        cout << "square" << endl;
        CaculateSquareArea();
    }
};

#endif