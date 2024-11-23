#ifndef ShapeManager_cpp
#define ShapeManager_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"
#include "Shape.cpp"

class ShapeManager : public Area, public Volume, public Input, public Shape 
    // This class follows the Single Responsibility Principle. 
{
    //This class is extending from Area, Volume, Input and Shape to link these classes to its child classes. 
};

#endif
