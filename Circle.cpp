#ifndef Circle_cpp
#define Circle_cpp

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

#include "Shape.cpp"

using namespace std;
class Circle : public Shape
// This class doesnot follows the Single Responsibility Principle . 
//Responsibilities: 
// 1 . Drawing the shape .
// 2 . Taking user's input .
// 3 . Calculating the computable dimensions .  

// The Interface Segregation Principle will not be applied to this class .
//Reason :
// Because the class itself is a concrete class 
// and Interface Segregation Principle only applies to interfaces or abstract classes .

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