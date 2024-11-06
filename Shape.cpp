#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape : public Area ,public Volume, public Input
{
public:
    virtual void draw() = 0;
};
#endif