#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape  // This class follows the Single Responsibility Principle. 
//This class has a virtual method that is override by child classes to implement their own draw() method. 
{
public:
    virtual void draw() = 0;
};
#endif