#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Rectangle : public ShapeManager // The Rectangle class follows 'S' of S.O.L.I.D
{
    private:
        double length;
        double width;
        double height;

        double area;
        double volume;

    public:
        
        void draw() override
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