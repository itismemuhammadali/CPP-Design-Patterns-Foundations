#ifndef Main1_cpp
#define Main1_cpp
#include<iostream>
#include "Draw.cpp"
#include "Enum.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
#include "ShapeFactory.cpp"

using namespace std;

int main()
{
    string shape;
    
    cout << "Enter a Shape" << endl;
    cin >> shape;

    Draw* shapeDrawer = ShapeFactory :: selectShape(shape);

    if (shapeDrawer)
    {
        shapeDrawer->drawShape();
        delete shapeDrawer;
    }
    else {
    cout << "No valid shape selected." << endl;
}
}
#endif