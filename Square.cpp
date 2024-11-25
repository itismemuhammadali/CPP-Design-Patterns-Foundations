#ifndef Square_cpp
#define Square_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Square : public Shape  
//Responsibility: This class provides concrete implementation for abstract methods declared in abstract classes shape, Input, Area, and Volume.
//This class doesnot follows the Single Responsibility Principle.  

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