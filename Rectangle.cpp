#ifndef Rectangle_H
#define Rectangle_H
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