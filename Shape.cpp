#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape    // The Shape class follows 'S' of S.O.L.I.D
{
public:
    virtual void draw() = 0;
};
#endif