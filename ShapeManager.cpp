#ifndef ShapeManager_cpp
#define ShapeManager_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"
#include "Shape.cpp"

class ShapeManager : public Area, public Volume, public Input, public Shape 
    // The ShapeManager class follows 'S' of S.O.L.I.D
{
    //this class is extending from Area, Volume, Input and Shape
};

#endif
