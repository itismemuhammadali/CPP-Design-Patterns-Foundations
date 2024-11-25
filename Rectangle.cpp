#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Rectangle : public Shape
//Responsibility: This class provides concrete implementation for abstract methods declared in abstract classes shape, Input, Area, and Volume.
//This class doesnot follows the Single Responsibility Principle. 


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