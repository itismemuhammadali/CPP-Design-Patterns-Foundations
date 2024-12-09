#ifndef Square_cpp
#define Square_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Square : public Shape  
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