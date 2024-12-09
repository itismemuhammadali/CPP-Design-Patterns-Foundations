#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Rectangle : public Shape 
//This class doesnot follows the Single Responsibility Principle . 
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