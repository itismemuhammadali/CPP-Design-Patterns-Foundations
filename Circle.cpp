#ifndef Circle_H
#define Circle_H
#include <iostream>
#include "Draw.cpp"
using namespace std;
class Circle : public Draw
{
public:
    void drawShape()
    {
        cout << "circle" << endl;
    }
};
#endif