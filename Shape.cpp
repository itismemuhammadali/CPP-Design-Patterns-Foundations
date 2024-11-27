#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape : public Area, public Volume, public Input 
//Responsibilities:
// 1 . To take user's input or in other words the responsibility to obtain the base dimensions of any shape.
// 2 . To store and to calculate the computable dimensions .i.e. in our case Area and Volume could be any other type of dimensions. 
// 3 . Drawing the shape. 
// This class doesnot follows the Single Responsibility Principle.
{
public:
    virtual void draw() = 0;
};
#endif