#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape  //Responsibility: This class provides a common interface to draw shape. 
// This class follows the Single Responsibility Principle.
{
public:
    virtual void draw() = 0;
};
#endif