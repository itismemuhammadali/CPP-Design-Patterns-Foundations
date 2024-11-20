#ifndef Main_cpp
#define Main_cpp

#include <iostream>

#include "ShapeFactory.cpp"

using namespace std;

int main()
{
    string shapeType;

    cout << "Enter a Shape" << endl;
    cin >> shapeType;

    ShapeManager *shapeHandler = ShapeFactory ::create(shapeType);
    
    if (shapeHandler)
    {
        shapeHandler->draw();
        shapeHandler->inputDimensions();
        double volume = shapeHandler->calculateVolume();
        double area = shapeHandler->calculateArea();

        cout << "Area : " << area << "\n";
        cout << "Volume : " << volume;
        delete shapeHandler;
    }
    else
    {
        cout << "No valid shape entered." << endl; 
    }
}
#endif