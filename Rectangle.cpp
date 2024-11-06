#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

using namespace std;

class Rectangle : public Shape
{
    private:
        double length;
        double width;
        double height;

        double area;
        double volume;

    public:
        
        void drawShape() override
        {
            cout << "rectangle" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter Length" << endl;
            cin >> length;
            cout << "Enter Width" << endl;
            cin >> width;
            cout << "Enter Height" << endl;
            cin >> height;
        }

        double calculateArea() override
        {
            area = length * width;
            return area;
        }

        double calculateVolume() override
        {
            volume = length * width * height;
            return volume;
        }
};
#endif