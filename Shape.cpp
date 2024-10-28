#ifndef Shape_cpp
#define Shape_cpp
#include "Area.cpp"
#include "Input.cpp"

class Shape : public Area ,public Input
{
public:
    virtual void drawShape() = 0;
};
#endif