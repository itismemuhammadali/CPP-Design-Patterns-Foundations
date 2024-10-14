#ifndef Circle_cpp
#define Circle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"

using namespace std;
class Circle : public Shape
{
public:
    void drawShape() override
    {
        cout << "circle" << endl; 
    }
    int inputAndCalculateArea() override
    {
        int Radius, area;
        int PI = 3.14;
        cout <<"Enter Circle Radius" <<endl;
        cout <<"Enter Radius" <<endl;
        cin >> Radius ;
        area = PI*Radius*Radius;
        cout << "Area = "  << area;
        return 0;
    }
};
#endif