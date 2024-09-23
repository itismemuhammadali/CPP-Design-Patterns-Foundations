#ifndef Square_H
#define Square_H
#include <iostream>
#include "Draw.cpp"
using namespace std;

class Square : public Draw
{
public:
    void drawShape()
    {
        cout << "square" << endl;
    }
};
#endif