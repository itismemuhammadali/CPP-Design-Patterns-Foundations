#ifndef Square_cpp
#define Square_cpp
#include <iostream>
#include "Draw.cpp"
using namespace std;

class Square : public Draw
{
public:
    void drawShape() override
    {
        cout << "square" << endl;
    }
};
#endif