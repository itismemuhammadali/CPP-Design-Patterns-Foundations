#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Rectangle : public Shape, public Input
{
    private:
        double length = input();
        double width = input();

    public:
        void drawShape() override
        {
            cout << "rectangle" << endl;
        }

        double input() override
        {
            if (length>0)
            {
                cout << "Enter Length" << endl;
                cin >> length;
                return length;
            }
            else
            {
                cout << "Enter Width" << endl;
                cin >> width;
                return width;
            }
            return 0;
        }

        double calculateArea() override
        {
            double area;
            area = length * width;
            cout << "Area : " << area;
            return area;
        }
};
#endif