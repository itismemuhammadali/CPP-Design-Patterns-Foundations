#ifndef ShapeFactory_H
#define ShapeFactory_H

#include <iostream>

#include "Enum.cpp"
#include "Shape.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"

using namespace std;

class ShapeFactory
{

public:
    static Shape *create(string shapeType)
    {
        Shape *shapeDrawer = nullptr;

        switch (fromStringtoEnum(shapeType))
        {
        case SQUARE:
            shapeDrawer = new Square();
            break;

        case RECTANGLE:
            shapeDrawer = new Rectangle();
            break;

        case CIRCLE:
            shapeDrawer = new Circle();
            break;

        case TRIANGLE:
            shapeDrawer = new Triangle();
            break;

        case INVALID:
            cout << "Invalid shape input." << endl;
            break;

        default:
            break;
        }

        return shapeDrawer;
    }
};
#endif