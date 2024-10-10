#ifndef Rectangle_cpp
#define Rectangle_cpp
#include <iostream>
#include "Draw.cpp"
using namespace std;

class Rectangle : public Draw
{
public:
    void drawShape() override
    {
        cout << "rectangle" << endl;
    }
};
#endif