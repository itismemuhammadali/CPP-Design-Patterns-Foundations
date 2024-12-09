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
// This class follows the Single Responsibility Principle . 
// Responsibility: This class is responsible for creating object based on user input .

// The Interface Segregation Principle will not be applied to this class .
//Reason :
// Because the class itself is a concrete class 
// and Interface Segregation Principle only applies to interfaces or abstract classes .

{

public:
    static Shape *create(string shapeType)
    {
        Shape *shapeHandler = nullptr;

        switch (fromStringtoEnum(shapeType))
        {
        case SQUARE:
            shapeHandler = new Square();
            break;

        case RECTANGLE:
            shapeHandler = new Rectangle();
            break;

        case CIRCLE:
            shapeHandler = new Circle();
            break;

        case TRIANGLE:
            shapeHandler = new Triangle();
            break;

        case INVALID:
            cout << "Invalid shape input." << endl;
            break;

        default:
            break;
        }

        return shapeHandler;
    }
};
#endif