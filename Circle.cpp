#ifndef Circle_cpp
#define Circle_cpp
#include <iostream>
#include "Draw.cpp"
using namespace std;
class Circle : public Draw
{
public:
    void drawShape() override
    {
        cout << "circle" << endl;
    }
};
#endif