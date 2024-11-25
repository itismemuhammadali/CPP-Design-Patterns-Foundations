#ifndef Square_cpp
#define Square_cpp

#include <iostream>

#include "ShapeManager.cpp"

using namespace std;

class Square : public ShapeManager  
//Responsibility: This class is responsible to provide implementation for draw(), inputDimensions, calculateArea(), and calculateVolume().
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