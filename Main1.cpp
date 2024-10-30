#ifndef Main1_cpp
#define Main1_cpp

#include <iostream>

#include "ShapeFactory.cpp"

using namespace std;

int main()
{
    string shape;

    cout << "Enter a Shape" << endl;
    cin >> shape;

    Shape *shapeDrawer = ShapeFactory ::create(shape);
    shapeDrawer->input();
    double area = shapeDrawer->calculateArea();

    if (shapeDrawer)
    {
        shapeDrawer->drawShape();
        cout << "Area : " << area;
        delete shapeDrawer;
    }
    else
    {
        cout << "No valid shape selected." << endl;
    }
}
#endif