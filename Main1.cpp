#ifndef Main1_cpp
#define Main1_cpp
#include <iostream>
#include "Shape.cpp"
#include "Enum.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
#include "ShapeFactory.cpp"
#include "Area.cpp"

using namespace std;

int main()
{
    string shape;

    cout << "Enter a Shape" << endl;
    cin >> shape;

    Shape *shapeDrawer = ShapeFactory ::create(shape);

    if (shapeDrawer)
    {
        shapeDrawer->drawShape();
        shapeDrawer->calculateArea();
        delete shapeDrawer;
    }
    else
    {
        cout << "No valid shape selected." << endl;
    }
}
#endif