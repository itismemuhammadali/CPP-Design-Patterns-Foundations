#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Rectangle : public ShapeManager // This class doesnot follows the Single Responsibility Principle. 
//This class overrides methods to "draw a Rectangle" take "input" and then perform task to "calculate area" and "calculate volume".
//I have suggestion that we create separate classes to override these methods.
//For example a Rectangle drawer class a Rectangle input class and then a Rectangle volume and a Rectangle area.
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