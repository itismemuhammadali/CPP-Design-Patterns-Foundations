#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape : public Area, public Volume, public Input 
//Responsibilities:
// 1 . To take user's input .
// 2 . To store and to calculate the computable dimensions . 
// 3 . Drawing the shape . 
// This class doesnot follows the Single Responsibility Principle .
{
public:
    virtual void draw() = 0;
};
#endif