#ifndef Main1_cpp
#define Main1_cpp
#include<iostream>
#include "Draw.cpp"
#include "Enum.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"

using namespace std;

int main()
{
    string shape;
    
    cout << "Enter a Shape" << endl;
    cin >> shape;

    Draw* shapeDrawer = NULL;

    switch (fromStringtoEnum(shape))
    {
    case SQUARE:
    {
        shapeDrawer = new Square();
    }
    break;
    case RECTANGLE:
    {
        shapeDrawer = new Rectangle();
    }
    break;
    case CIRCLE:
    {
        shapeDrawer = new Circle();
    }
    break;
    case INVALID:
    {
        cout<<"invalid input"<<endl;
    }
    break;
    default:
        break;
    }
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