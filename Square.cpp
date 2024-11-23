#ifndef Square_cpp
#define Square_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Square : public ShapeManager  // This class doesnot follows the Single Responsibility Principle. 
//This class overrides methods to "draw a Square" take "input" and then perform task to "calculate area" and "calculate volume".
//I have suggestion that we create separate classes to override these methods.
//For example a Square drawer class a Square input class and then a Square volume and a Square area.
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