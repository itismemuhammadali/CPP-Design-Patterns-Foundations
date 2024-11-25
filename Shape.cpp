#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape : public Area, public Volume, public Input 
//Responsibility: This class provides a common interface to draw shape and serves as a base class that links the functionality of Input, Area, and Volume to its child classes. 
// This class doesnot follows the Single Responsibility Principle.
{
public:
    virtual void draw() = 0;
};
#endif