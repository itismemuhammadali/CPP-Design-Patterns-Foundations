#ifndef Shape_cpp
#define Shape_cpp
#include "Area.cpp"

class Shape : public Area
{
public:
    virtual void drawShape() = 0;
};
#endif