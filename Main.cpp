#ifndef Main1_cpp
#define Main1_cpp

#include <iostream>

#include "ShapeFactory.cpp"

using namespace std;

int main()
{
    string shapeType;

    cout << "Enter a Shape" << endl;
    cin >> shapeType;

    Shape *shapeDrawer = ShapeFactory ::create(shapeType);
    shapeDrawer->inputDimensions();
    double volume = shapeDrawer->calculateVolume();
    double area = shapeDrawer->calculateArea();

    if (shapeDrawer)
    {
        shapeDrawer->draw();
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