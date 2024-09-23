#ifndef Enum_H
#define Enum_H
#include <iostream>
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"

using namespace std;
enum Shapes { SQUARE, RECTANGLE, CIRCLE, INVALID };

Shapes fromStringtoEnum(string shape)
{
    if(shape=="square")
    {
        return SQUARE;
    }
    else if(shape=="rectangle")
    {
        return RECTANGLE;
    }
    else if (shape=="circle")
    {
        return CIRCLE;
    }
    else
    {
        return INVALID;
    }
}
#endif