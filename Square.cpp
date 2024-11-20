#ifndef Square_cpp
#define Square_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Square : public ShapeManager  // The Square class follows 'S' of S.O.L.I.D
{
    private:
        double length;
        
        double area;
        double volume;

    public:

        void draw() override
        {
            cout << "square" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter Length" << endl;
            cin >> length;
        }

        double calculateArea() override
        {
            area = length * length;
            return area;
        }

        
        double calculateVolume() override
        {
            volume = length * length * length;
            return volume;
        }
};

#endif