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
    double volume = shapeDrawer->calculateVolume();
    double area = shapeDrawer->calculateArea();

    if (shapeDrawer)
    {
        shapeDrawer->drawShape();
        cout << "Area : " << area << "\n";
        cout << "Volume : " << volume;
        delete shapeDrawer;
    }
    else
    {
        cout << "No valid shape selected." << endl;
    }
}
#endif