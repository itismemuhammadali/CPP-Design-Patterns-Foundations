#ifndef Enum_cpp
#define Enum_cpp

#include <iostream>

#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
#include "Triangle.cpp"

using namespace std;

enum Shapes
{
    SQUARE,
    RECTANGLE,
    CIRCLE,
    TRIANGLE,
    INVALID
};

Shapes fromStringtoEnum(string shapeType)
{
    if (shapeType == "square")
    {
        return SQUARE;
    }
    else if (shapeType == "rectangle")
    {
        return RECTANGLE;
    }
    else if (shapeType == "circle")
    {
        return CIRCLE;
    }
    else if (shapeType == "triangle")
    {
        return TRIANGLE;
    }
    else
    {
        return INVALID;
    }
}
#endif