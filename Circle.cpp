#ifndef Circle_cpp
#define Circle_cpp

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

#include "Shape.cpp"

using namespace std;
class Circle : public Shape
//Responsibilities: 
// 1 . Drawing the shape .
// 2 . Taking user's input .
// 3 . Calculating the computable dimensions .  
// This class doesnot follows the Single Responsibility Principle . 

{
    private:
        double radius;
        double height;
        
        double area;
        double volume;

    public:
        
        void draw() override
        {
            cout << "circle" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter Circle Radius" << endl;
            cin >> radius;
            cout << "Enter Circle Height" << endl;
            cin >> height;
        }

        double calculateArea() override
        {
            area = M_PI * radius * radius;
            return area;
        }

        double calculateVolume() override
        {
            volume = M_PI * radius * 2 * height ;
            return volume;
        }
};
#endif