#ifndef Input_cpp
#define Input_cpp

class Input   // This class follows the Single Responsibility Principle. 
//This class has a virtual method that is override by child classes to implement their own imputDimensions().
{
public:
    virtual void inputDimensions() = 0;
};
#endif