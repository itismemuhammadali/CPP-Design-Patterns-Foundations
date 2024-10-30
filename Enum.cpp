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

Shapes fromStringtoEnum(string shape)
{
    if (shape == "square")
    {
        return SQUARE;
    }
    else if (shape == "rectangle")
    {
        return RECTANGLE;
    }
    else if (shape == "circle")
    {
        return CIRCLE;
    }
    else if (shape == "triangle")
    {
        return TRIANGLE;
    }
    else
    {
        return INVALID;
    }
}
#endif