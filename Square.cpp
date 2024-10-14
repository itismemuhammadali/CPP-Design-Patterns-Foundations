#ifndef Square_cpp
#define Square_cpp
#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
using namespace std;

class Square : public Shape
{
public:
    void drawShape() override
    {
        cout << "square" << endl;
    }

    int inputAndCalculateArea() override
    {
        int length, width, area;
        cout <<"Enter square dimensions" <<endl;
        cout <<"Enter Length" <<endl;
        cin >> length ;
        cout <<"Enter Width" <<endl;
        cin >> width ;
        area = length*width;
        cout << "Area = "  << area;
        return 0;
    }
};

#endif