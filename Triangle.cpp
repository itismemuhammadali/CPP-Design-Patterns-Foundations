#ifndef Triangle_cpp
#define Triangle_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Triangle : public ShapeManager    // The Triangle class follows 'S' of S.O.L.I.D
{
    private:
        double base;
        double height;
        double length;

        double area;
        double volume;

    public:
        
        void draw() override
        {
            cout << "triangle" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter base" << endl;
            cin >> base;
            cout << "Enter height" << endl;
            cin >> height;
            cout << "Enter length" << endl;
            cin >> length;
        }

        double calculateArea() override
        {
            area = (base * height)/2;
            return area;
        }

         double calculateVolume() override
        {
            volume = (base * height * length)/2;
            return volume;
        }
};
#endif