#ifndef Input_cpp
#define Input_cpp

class Input  //Responsibility: This class provides a common interface for taking input from user. 
// This class follows the Single Responsibility Principle.
{
public:
    virtual void inputDimensions() = 0;
};
#endif